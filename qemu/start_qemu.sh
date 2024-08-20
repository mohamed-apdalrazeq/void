#!/bin/bash

DISK_IMAGE="kali-linux-2024.2-qemu-amd64.qcow2"
MEMORY="2048" # بالميجابايت
CPUs="2"

# التحقق من وجود ملف الصورة
if [ ! -f "$DISK_IMAGE" ]; then
    echo "ملف صورة القرص '$DISK_IMAGE' غير موجود."
    exit 1
fi

# تشغيل QEMU
qemu-system-x86_64 \
    -hda "$DISK_IMAGE" \
    -m "$MEMORY" \
    -smp "$CPUs" \
    -enable-kvm \
    -display gtk \
    -vga virtio \
    -monitor none \
    -device virtio-gpu-pci \
   # -full-screen
