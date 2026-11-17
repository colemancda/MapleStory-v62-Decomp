/* FUN_005d634c - 0x005d634c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d634c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  cVar1 = FUN_0042452b();
  *(int *)(unaff_EBP + 8) = extraout_ECX + 4;
  iVar3 = FUN_004371d2(unaff_EBP + -0x14,unaff_EBP + -0x10);
  if (iVar3 == 0) goto LAB_005d6491;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
  FUN_005d1003();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 == '\0') {
    iVar3 = FUN_004cd670(*(int *)(unaff_EBP + -0x18) + 0xf8,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x100));
    if (iVar3 != 0) {
      iVar3 = *(int *)(unaff_EBP + -0x18);
      uVar2 = FUN_0055a766();
      *(undefined4 *)(iVar3 + 0x100) = uVar2;
    }
    iVar3 = FUN_005c4e46();
    if (iVar3 == 0) goto LAB_005d6410;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x18);
    uVar2 = FUN_004133b5();
    *(undefined4 *)(iVar3 + 0x3cc) = uVar2;
    FUN_005d6644(unaff_EBP + -0x1c);
LAB_005d6410:
    FUN_005d62bf(*(undefined4 *)(unaff_EBP + -0x18));
    if ((*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x15c) + 0x1d8) != 0) ||
       (iVar3 = FUN_005d053d(), iVar3 != 0)) {
      if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x15c) + 0x1d8) != 0) {
        FUN_00434d5d();
      }
      iVar3 = FUN_005d053d();
      if (iVar3 != 0) {
        FUN_00434d5d();
      }
    }
    FUN_00830f5d();
    FUN_005d66f8(*(undefined4 *)(unaff_EBP + -0x10));
    FUN_004d4b97(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00434d5d();
LAB_005d6491:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


