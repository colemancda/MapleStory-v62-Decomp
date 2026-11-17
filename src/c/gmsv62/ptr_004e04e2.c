/* ptr_004e04e2 - 0x004e04e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x004e04f3) */

void ptr_004e04e2(void)

{
  int *piVar1;
  int iVar2;
  char *_Str1;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_10;
  int iStack_c;
  
  _Str1 = *(char **)(unaff_EBX + 0xec);
  if (*(char **)(unaff_EBX + 0xec) == (char *)0x0) {
    _Str1 = DAT_00980dfc;
  }
  iStack_c = 0x4e0508;
  iVar2 = _strcmp(_Str1,&DAT_00978474);
  if (iVar2 == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1c8));
    iStack_c = 0x4e07c9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1a8));
    iStack_c = 0x4e07ef;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    iStack_c = 0x4e0818;
    iStack_c = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00679e4e(&uStack_10,0xedb);
    uVar4 = 7;
    uVar3 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    FUN_004115d9(0x1b,7);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    iStack_c = 0x4e0898;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_c = 0x4e08bc;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    iStack_c = 0x4e08e2;
    iStack_c = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00679e4e(&uStack_10,0xedc);
    uVar4 = 0x14;
    uVar3 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    FUN_004115d9(0x1b,0x14);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (*(int *)(unaff_EBX + 0xf0) == 0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
      iStack_c = 0x4e0600;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
      iStack_c = 0x4e0626;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      iStack_c = 0x4e064f;
      iStack_c = FUN_00449749();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
      FUN_00679e4e(&uStack_10,0xedd);
      uVar4 = 7;
      uVar3 = 0x1b;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      FUN_004115d9(0x1b,7);
      FUN_00448e3a(uVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x108));
      iStack_c = 0x4e053b;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xe8));
      iStack_c = 0x4e0561;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      iStack_c = 0x4e058a;
      iStack_c = FUN_00449749();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
      FUN_00679e4e(&uStack_10,0xede);
      uVar4 = 7;
      uVar3 = 0x1b;
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      FUN_004115d9(0x1b,7);
      FUN_00448e3a(uVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    iStack_c = 0x4e06c5;
    FUN_00679d22();
    iStack_c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    uStack_10 = 0x4e06db;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x188));
    iStack_c = 0x4e0704;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x168));
    iStack_c = 0x4e072e;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iStack_c = 0x4e0757;
    iStack_c = FUN_00449749();
    uStack_10 = 0x4e0760;
    uVar3 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x14;
    uVar3 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_004115d9(0x1b,0x14);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_c = 0x4e095a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar2;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = FUN_0040e53d();
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  iVar2 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,6,0x25U - iVar2 >> 1,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0xb8);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


