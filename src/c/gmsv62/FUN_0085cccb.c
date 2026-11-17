/* FUN_0085cccb - 0x0085cccb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0085cccb(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_0085cd50();
  if (iVar1 == 0) {
    iVar1 = 0;
    while( true ) {
      FUN_0085cd50();
      iVar2 = *extraout_ECX;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + -4);
      }
      if (iVar3 <= iVar1) goto LAB_0085cd2e;
      iVar2 = iVar4 + 4 + iVar2;
      if (iVar2 == 0) {
        iVar2 = DAT_00980dfc;
      }
      iVar3 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + 8) != 0) {
        iVar3 = *(int *)(unaff_EBP + 8);
      }
      iVar2 = FUN_008858f0(iVar3,iVar2);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x16;
    }
  }
  else {
LAB_0085cd2e:
    iVar1 = -1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


