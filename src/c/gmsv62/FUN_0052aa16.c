/* FUN_0052aa16 - 0x0052aa16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0052aa16(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045b90e(unaff_EBP + -0x10);
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + -4);
    }
    if (iVar2 <= iVar3) break;
    if ((*(char *)(iVar3 + iVar1) < '0') || ('9' < *(char *)(iVar3 + iVar1))) {
      uVar4 = 0;
LAB_0052aa5f:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e5c9();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar4;
    }
    iVar3 = iVar3 + 1;
  }
  uVar4 = 1;
  goto LAB_0052aa5f;
}


