/* FUN_0053245c - 0x0053245c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0053245c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined8 uVar5;
  
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
LAB_005324ef:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e5c9();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar4;
    }
    iVar3 = iVar3 + 1;
  }
  uVar5 = FUN_0087b6b6(iVar1);
  iVar1 = FUN_0087b6ab(*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((((int)((ulonglong)uVar5 >> 0x20) == 0) && (-1 < (int)uVar5)) &&
      ((*(int *)(unaff_EBP + 0x14) < 0 || (iVar1 <= *(int *)(unaff_EBP + 0x14))))) &&
     ((*(int *)(unaff_EBP + 0x10) < 0 || (*(int *)(unaff_EBP + 0x10) < iVar1)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  goto LAB_005324ef;
}


