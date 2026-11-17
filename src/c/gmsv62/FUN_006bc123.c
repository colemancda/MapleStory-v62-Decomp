/* FUN_006bc123 - 0x006bc123 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bc123(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iStack_70;
  undefined *puStack_6c;
  undefined *puStack_68;
  
  FUN_00879bb8();
  uVar3 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar6 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar6 + 4);
  iVar5 = *(int *)(iVar4 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 != 0) {
    puStack_68 = (undefined *)(unaff_EBP + -0x3c);
    puStack_6c = *(undefined **)(iVar4 + 0xc);
    iStack_70 = 0x6bc15f;
    FUN_0087b818();
    puStack_68 = (undefined *)(unaff_EBP + -0x3c);
    puStack_6c = (undefined *)0x6bc170;
    FUN_00414edd();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar4 = *(int *)(iVar6 + 4);
  iVar5 = *(int *)(iVar4 + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 != 0) {
    puStack_68 = (undefined *)(unaff_EBP + -0x3c);
    puStack_6c = *(undefined **)(iVar4 + 0x20);
    iStack_70 = 0x6bc191;
    FUN_0087b818();
    puStack_68 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    puStack_6c = (undefined *)0x6bc1a5;
    FUN_00414edd();
    puStack_6c = (undefined *)(unaff_EBP + -0x30);
    puStack_68 = &DAT_00964ecc;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_70 = 0x6bc1bb;
    FUN_004f1f89();
    puStack_68 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_6c = (undefined *)0x6bc1d2;
    FUN_004653c5();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_68 = (undefined *)0x6bc1df;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      puStack_68 = (undefined *)0x6bc1f3;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      puStack_68 = (undefined *)0x6bc208;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_68 = (undefined *)0x6bc21d;
      FUN_00434e38();
    }
  }
  puStack_68 = (undefined *)(unaff_EBP + -0x24);
  puStack_6c = (undefined *)0x6bc229;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_68 = (undefined *)0x6bc23d;
  FUN_00403191();
  puStack_68 = (undefined *)0xffffffff;
  puStack_6c = &DAT_00964364;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_70 = 0x6bc255;
  puStack_68 = (undefined *)FUN_0045f0f3();
  puStack_6c = (undefined *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_70 = 0x6bc266;
  uVar3 = FUN_0045e02d();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_68 = (undefined *)0x6bc274;
  iVar4 = FUN_006bdbc0();
  puStack_68 = (undefined *)(iVar4 + 0x10);
  puStack_6c = (undefined *)(unaff_EBP + -0x2c);
  iStack_70 = 0x6bc284;
  FUN_0045e02d();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_68 = (undefined *)0x6bc28f;
  puStack_6c = (undefined *)FUN_00449713();
  *(undefined ***)(unaff_EBP + -0x3c) = &puStack_68;
  iStack_70 = 0x6bc29b;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_6c = (undefined *)0x6bc2a7;
  FUN_0044974c();
  puStack_6c = (undefined *)0x6bc2ae;
  uVar3 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    puStack_68 = (undefined *)0x6bc2c5;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_68 = (undefined *)0x6bc2da;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    puStack_68 = (undefined *)0x6bc2ef;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_68 = (undefined *)0x6bc2fd;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc308;
    FUN_00878dfb();
  }
  puStack_68 = (undefined *)0x6bc311;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_68 = (undefined *)0x6bc31e;
  FUN_00403191();
  puStack_68 = (undefined *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_6c = (undefined *)0x6bc332;
  puStack_6c = (undefined *)FUN_00449749();
  iStack_70 = -1;
  iStack_70 = FUN_0045f0f3(&DAT_00964364);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0045e02d(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_70 = 0x6bc35c;
  iStack_70 = FUN_006bdbc0();
  iStack_70 = iStack_70 + 0x10;
  FUN_0045e02d(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_70 = 0x6bc376;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_70;
  FUN_00448a17(uVar3);
  iVar4 = *(int *)(unaff_EBP + 0x10) + 8;
  uVar3 = 0x1a;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = iVar4;
  FUN_004115d9(0x1a,iVar4);
  FUN_00448e3a(uVar3,iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    puStack_68 = (undefined *)0x6bc3b2;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_68 = (undefined *)0x6bc3c7;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    puStack_68 = (undefined *)0x6bc3dc;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_68 = (undefined *)0x6bc3ea;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_68 = (undefined *)0x6bc3f5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_68 = (undefined *)0x6bc402;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_68 = (undefined *)0x6bc40d;
    FUN_00878dfb();
  }
  puStack_68 = (undefined *)0x6bc416;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_68 = (undefined *)0x6bc423;
  FUN_00403191();
  puStack_68 = (undefined *)(unaff_EBP + -0x60);
  iStack_70 = unaff_EBP + -0x34;
  puStack_6c = (undefined *)0x5;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_6c = (undefined *)0x6bc447;
  puStack_6c = (undefined *)FUN_00449749();
  iStack_70 = 0x6bc450;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_70;
  FUN_00448a17(uVar3);
  iVar5 = *(int *)(unaff_EBP + -0x3c) + 0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004115d9(iVar5,iVar4);
  FUN_00448e3a(iVar5,iVar4);
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_68 = (undefined *)0x6bc48c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc497;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_68 = (undefined *)0x6bc4a4;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc4af;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_68 = *(undefined **)(*(int *)(iVar6 + 4) + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_6c = (undefined *)0x6bc4c9;
  iVar4 = FUN_0085685c();
  if (iVar4 != 0) {
    puStack_68 = (undefined *)(unaff_EBP + -0x14);
    puStack_6c = (undefined *)0x6bc4e2;
    puVar2 = (undefined *)0x1;
    FUN_007d4a9a();
    puStack_68 = puVar2;
    puStack_6c = (undefined *)(unaff_EBP + -0x14);
    *(undefined ***)(unaff_EBP + -0x40) = &puStack_68;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_70 = 0x6bc4f9;
    FUN_0046fcc9();
    puStack_6c = (undefined *)(unaff_EBP + -0x10);
    iStack_70 = 0x6bc502;
    FUN_007d3a22();
    puStack_68 = (undefined *)0x6bc50e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_68 = (undefined *)0x6bc51e;
    puStack_6c = (undefined *)FUN_00449713();
    *(undefined ***)(unaff_EBP + -0x40) = &puStack_68;
    iStack_70 = 0x6bc52a;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_6c = (undefined *)0x6bc536;
    FUN_0044974c();
    puStack_6c = (undefined *)0x6bc53d;
    iVar6 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_68 = (undefined *)0x6bc54c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_68 = (undefined *)0x6bc557;
      FUN_00878dfb();
    }
    puStack_68 = (undefined *)0x6bc569;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    puStack_68 = (undefined *)(unaff_EBP + -0x60);
    puStack_6c = (undefined *)0x6bc573;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_68 = (undefined *)0x6bc57f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_68 = (undefined *)0x6bc589;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    puStack_68 = (undefined *)(unaff_EBP + -0x50);
    puStack_6c = (undefined *)0x6bc593;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_68 = (undefined *)0x6bc59f;
      FUN_00878dfb();
    }
    puStack_68 = (undefined *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_6c = (undefined *)0x6bc5b3;
    puStack_6c = (undefined *)FUN_00449749();
    iStack_70 = 0x6bc5bc;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x40) = &iStack_70;
    FUN_00448a17(uVar3);
    iVar4 = *(int *)(unaff_EBP + 0x10) + 8;
    iVar6 = (0x42 - iVar6) / 2 + 0x101;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_004115d9(iVar6,iVar4);
    FUN_00448e3a(iVar6,iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_68 = (undefined *)0x6bc5f6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_68 = (undefined *)0x6bc601;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_68 = (undefined *)0x6bc60e;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_68 = (undefined *)0x6bc619;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      puStack_68 = (undefined *)0x6bc62a;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    iVar6 = *(int *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_68 = (undefined *)(*(int *)(iVar6 + 4) + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_6c = (undefined *)0x6bc648;
  FUN_006bdaae();
  puStack_68 = (undefined *)0x6bc64e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  puStack_68 = (undefined *)(unaff_EBP + -0x50);
  puStack_6c = (undefined *)0x6bc658;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc664;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_68 = (undefined *)0x6bc66e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  puStack_68 = (undefined *)(unaff_EBP + -0x60);
  puStack_6c = (undefined *)0x6bc678;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc684;
    FUN_00878dfb();
  }
  puStack_68 = (undefined *)(unaff_EBP + -0x60);
  iStack_70 = unaff_EBP + 8;
  puStack_6c = (undefined *)0x2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_6c = (undefined *)0x6bc6a8;
  puStack_6c = (undefined *)FUN_00449749();
  iStack_70 = 0x6bc6b1;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x40) = &iStack_70;
  FUN_00448a17(uVar3);
  iVar4 = *(int *)(unaff_EBP + 0x10) + 8;
  uVar3 = 0x14c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004115d9(0x14c,iVar4);
  FUN_00448e3a(uVar3,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    puStack_68 = (undefined *)0x6bc6ed;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_68 = (undefined *)0x6bc6fa;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc705;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_68 = (undefined *)0x6bc712;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_68 = (undefined *)0x6bc71d;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(iVar6 + 4) + 0x24) < 3) {
    puStack_68 = (undefined *)0x6bc730;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    puStack_68 = (undefined *)(unaff_EBP + -0x60);
    puStack_6c = (undefined *)0x6bc73a;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_68 = (undefined *)0x6bc746;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 0xc);
    iVar4 = *piVar1;
    uVar3 = *(undefined4 *)
             (*(int *)(unaff_EBP + -0x1c) + 0x648 + *(int *)(*(int *)(iVar6 + 4) + 0x24) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    if (iVar4 == 0) {
      puStack_68 = (undefined *)0x6bc76f;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    iStack_70 = *(int *)(unaff_EBP + -0x60);
    puStack_6c = *(undefined **)(unaff_EBP + -0x5c);
    puStack_68 = *(undefined **)(unaff_EBP + -0x58);
    iVar6 = (**(code **)(*piVar1 + 0x80))
                      (piVar1,0xed,*(int *)(unaff_EBP + 0x10) + 5,*(undefined4 *)(unaff_EBP + 8));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar1,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  }
  else {
    puStack_68 = (undefined *)0x6bc7b7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    puStack_68 = (undefined *)(unaff_EBP + -0x60);
    puStack_6c = (undefined *)0x6bc7c1;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_68 = (undefined *)0x6bc7cd;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 0xc);
    iVar4 = *piVar1;
    uVar3 = *(undefined4 *)
             (*(int *)(unaff_EBP + -0x1c) + 0x4c4 + *(int *)(*(int *)(iVar6 + 4) + 0x24) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    if (iVar4 == 0) {
      puStack_68 = (undefined *)0x6bc7f6;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    iStack_70 = *(int *)(unaff_EBP + -0x60);
    puStack_6c = *(undefined **)(unaff_EBP + -0x5c);
    puStack_68 = *(undefined **)(unaff_EBP + -0x58);
    iVar6 = (**(code **)(*piVar1 + 0x80))
                      (piVar1,0xed,*(int *)(unaff_EBP + 0x10) + 5,*(undefined4 *)(unaff_EBP + 8));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar1,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  }
  iVar6 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


