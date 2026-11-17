/* ptr_007530bf - 0x007530bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007530bf(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_c;
  
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    FUN_00878dfb();
  }
  FUN_004a2734();
  iStack_c = 5;
  FUN_0074d72a();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if ((((((iVar1 == 0x3d837d) || (iVar1 == 0x3d837e)) || (iVar1 == 0x3d837f)) ||
       ((iVar1 == 0x3d8380 || (iVar1 == 0x3d8381)))) || (iVar1 == 0x3d8382)) ||
     ((iVar1 == 0x3d8383 || (iVar1 == 0x3d8384)))) {
    iVar1 = FUN_00455c59();
    iVar1 = *(int *)(iVar1 + 4);
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
    }
    if (*(int *)(iVar1 + 0x4a7) != 0) {
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_c = 0x7531bb;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00414ebb();
      _strlen(&DAT_00964314);
      FUN_0045efbb();
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00414ebb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00750398();
  iStack_c = *(int *)(unaff_EBP + 0xc);
  FUN_0075699b(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 8));
  if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
  }
  FUN_004031b7();
  iVar1 = *(int *)(iVar1 + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + 0x20) = register0x00000010;
  iStack_c = 0x753298;
  FUN_00756efd();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00449713();
  iStack_c = 0x7532ae;
  FUN_00758757();
  if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0')) {
    *(BADSPACEBASE **)(unaff_EBP + 0x20) = register0x00000010;
    iStack_c = 0x7532ca;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00449713();
    iStack_c = 0x7532e0;
    FUN_007585ac();
  }
  iVar3 = *(int *)(unaff_EBP + -0x38);
  iVar1 = iVar3 + 0x1f;
  iVar2 = *(int *)(unaff_EBP + 0x10);
  if ((((iVar2 == 0x3d837d) || (iVar2 == 0x3d837e)) || (iVar2 == 0x3d837f)) ||
     (((iVar2 == 0x3d8380 || (iVar2 == 0x3d8381)) ||
      ((iVar2 == 0x3d8382 || ((iVar2 == 0x3d8383 || (iVar2 == 0x3d8384)))))))) {
    iVar2 = FUN_00455c59();
    iVar2 = *(int *)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
    }
    if (*(int *)(iVar2 + 0x4a7) != 0) {
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_c = 0x75339c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00414ebb();
      *(BADSPACEBASE **)(unaff_EBP + 0xc) = register0x00000010;
      iStack_c = 0x7533bc;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00449713();
      iStack_c = 0x7533d2;
      FUN_007585ac();
      iVar1 = iVar3 + 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_00414ebb();
    }
  }
  if ((*(char **)(unaff_EBP + -0x24) != (char *)0x0) && (**(char **)(unaff_EBP + -0x24) != '\0')) {
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4dc);
    piVar6 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (piVar6 == (int *)0x0) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x20);
    }
    iVar3 = *piVar6;
    iStack_c = *(int *)(unaff_EBP + -100);
    *(int **)(unaff_EBP + 0xc) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))(piVar6,10,iVar1 + 2,*(undefined4 *)(unaff_EBP + 0x20));
    if (iVar3 < 0) {
      iStack_c = 0x75345b;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iStack_c = unaff_EBP + 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00449749();
    iStack_c = 0x7534e8;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 0xc) = &iStack_c;
    iStack_c = extraout_ECX;
    FUN_00448a17(uVar4);
    iVar3 = iVar1 + -2;
    uVar4 = 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_004115d9(0x10,iVar3);
    FUN_00448e3a(uVar4,iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iVar1 = iVar1 + 0x10;
  }
  if ((((*(int *)(unaff_EBP + 0x24) != 0) &&
       (sVar5 = _strlen(*(char **)(unaff_EBP + 0x24)), sVar5 != 0)) &&
      (*(int *)(unaff_EBP + 0x10) != 0x3d83ae)) && (*(int *)(unaff_EBP + 0x10) != 0x3d83af)) {
    iStack_c = 0x753584;
    FUN_007588fb();
    iVar1 = iVar1 + 0x10;
  }
  if ((*(char **)(unaff_EBP + -0x28) != (char *)0x0) && (**(char **)(unaff_EBP + -0x28) != '\0')) {
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4dc);
    piVar6 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (piVar6 == (int *)0x0) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x20);
    }
    iVar3 = *piVar6;
    iStack_c = *(int *)(unaff_EBP + -100);
    *(int **)(unaff_EBP + 0x20) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))(piVar6,10,iVar1 + 2,*(undefined4 *)(unaff_EBP + 0x24));
    if (iVar3 < 0) {
      iStack_c = 0x753601;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iStack_c = unaff_EBP + 0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00449749();
    iStack_c = 0x75368e;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 0x20) = &iStack_c;
    FUN_00448a17(uVar4);
    iVar1 = iVar1 + -2;
    uVar4 = 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_004115d9(0x10,iVar1);
    FUN_00448e3a(uVar4,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
  }
  iVar3 = *(int *)(unaff_EBP + 0x1c);
  iVar1 = iVar3 + 0x20;
  iStack_c = iVar1;
  FUN_00757a6e(10);
  if ((*(int *)(unaff_EBP + 0x10) / 10000 == 0x12d) || (*(int *)(unaff_EBP + 0x14) != 0)) {
    uVar4 = FUN_00413367();
    iStack_c = 0;
    FUN_00758f91(*(undefined4 *)(unaff_EBP + 0x14),uVar4);
    *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffff8;
    iStack_c = 7;
    FUN_00756efd(&stack0xfffffff8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_c = 0x7537a6;
    iStack_c = FUN_00449713();
    FUN_00757d85(0x5c,0x10e,iVar3 + 0x2c);
  }
  else {
    *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffff8;
    iStack_c = 7;
    FUN_00756efd(&stack0xfffffff8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_c = 0x753747;
    iStack_c = FUN_00449713();
    FUN_00757d85(0x5c,0x10e,iVar1);
  }
  if ((*(int *)(unaff_EBP + 0x28) != 0) &&
     (*(int *)(unaff_EBP + 0x28) != *(int *)(unaff_EBP + 0x2c))) {
    iStack_c = 0x7537dd;
    FUN_00759249();
  }
  if (*(int *)(unaff_EBP + 0x30) != 0) {
    FUN_007509d5();
  }
  if (*(int *)(unaff_EBP + 0x34) != 0) {
    iStack_c = unaff_EBP + 0x40;
    *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffff8;
    FUN_0052e0fe();
    iStack_c = *(int *)(unaff_EBP + 0x3c);
    FUN_0075a959(0x76,*(undefined4 *)(unaff_EBP + 0x34),*(undefined4 *)(unaff_EBP + 0x38));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x44) != 0) {
    FUN_0048ba7b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


