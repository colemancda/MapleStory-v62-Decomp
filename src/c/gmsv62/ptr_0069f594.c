/* ptr_0069f594 - 0x0069f594 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0069f594(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  char cVar5;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00403191();
  iStack_10 = unaff_EBP + -0x100;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_14;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_14 = extraout_ECX;
  FUN_00679e4e(&uStack_14,0xc10);
  iVar2 = unaff_EBP + -0x1b0;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x44) = uVar1;
  iVar2 = FUN_0041a581();
  if ((iVar2 < (int)unaff_EBX) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(int **)(unaff_EBP + -0x10) = unaff_EBX;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  do {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if ((char)*piVar3 == ' ') {
      FUN_0045e08c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00414ebb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    while( true ) {
      if (piVar3 == unaff_EBX) {
        iVar2 = 0;
      }
      else {
        iVar2 = piVar3[-1];
      }
      cVar5 = (char)unaff_EBX;
      if (iVar2 < *(int *)(unaff_EBP + -0x28)) goto LAB_0069fe07;
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      iVar2 = FUN_00402e32();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
      iStack_10 = 0x69fd39;
      FUN_00448a17();
      iStack_10 = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      uStack_14 = 0x69fd47;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      FUN_0044974c();
      uVar4 = FUN_00448ebb();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (uVar4 < 0xa5);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int **)(unaff_EBP + -0x30) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + -0x11) != cVar5) break;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    FUN_004655d4();
    FUN_00414f8b();
    FUN_0045e08c();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00414ebb();
LAB_0069fe07:
    VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
    iVar2 = FUN_00402e32();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
    iStack_10 = 0x69fe43;
    FUN_00448a17();
    iStack_10 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_14 = 0x69fe51;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    FUN_0044974c();
    uVar4 = FUN_00448ebb();
    *(bool *)(unaff_EBP + -0x11) = uVar4 < 0xa5;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(char *)(unaff_EBP + -0x11) != cVar5) {
      if (**(char **)(unaff_EBP + -0x10) == ' ') {
        FUN_0045e08c();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_00414ebb();
      }
      FUN_004655d4();
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(char *)(unaff_EBP + -4) = cVar5;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045c14e();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


