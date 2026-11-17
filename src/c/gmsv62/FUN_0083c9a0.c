/* FUN_0083c9a0 - 0x0083c9a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083c9a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 2;
  iVar1 = FUN_00455c59(unaff_EBP + -0x1c);
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x3f7);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 1) {
LAB_0083ca48:
      iVar1 = FUN_004029b9(0x8c);
      *(int *)(unaff_EBP + -0x18) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_007e160b(*(undefined4 *)(unaff_EBP + -0x10),
                             *(int *)(unaff_EBP + 0xc) == 0x414ec0);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
      *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
      FUN_0083e30d();
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iVar1 = FUN_004bc6a2();
      if (iVar1 == 1) {
        FUN_0083cae0(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083e32a();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    FUN_00458c4f(unaff_EBP + -0x24,5,iVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int *)(unaff_EBP + -0x20) != 0) && (iVar2 = FUN_0045e2eb(), iVar2 == 0x53c550)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      goto LAB_0083ca48;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
  } while( true );
}


