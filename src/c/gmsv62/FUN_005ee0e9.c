/* FUN_005ee0e9 - 0x005ee0e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ee0e9(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xb0) == 0) {
    FUN_0045cdbc(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = 0;
    while( true ) {
      iVar1 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x60);
      if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar3)) goto LAB_005ee170;
      if (*(int *)(iVar1 + uVar3 * 8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00409205();
      }
      if (iVar1 == 0) {
        iVar1 = DAT_00980dfc;
      }
      iVar2 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + 8) != 0) {
        iVar2 = *(int *)(unaff_EBP + 8);
      }
      iVar1 = FUN_008858f0(iVar2,iVar1);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 1;
    }
    if (-1 < (int)uVar3) {
      FUN_005eb840(uVar3 + 2,0);
    }
LAB_005ee170:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


