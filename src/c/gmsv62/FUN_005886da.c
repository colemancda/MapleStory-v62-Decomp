/* FUN_005886da - 0x005886da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005886da(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 1000) {
    if (extraout_ECX[0x35] == 0x3eb) {
      puVar2 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
      uVar3 = *puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar1 = *extraout_ECX;
      uVar3 = FUN_0087b6ab(uVar3);
      (**(code **)(iVar1 + 0x34))(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_00588737;
    }
LAB_0058872e:
    iVar1 = *extraout_ECX;
    uVar3 = 1;
  }
  else if (iVar1 == 0x3e9) {
    if (extraout_ECX[0x35] == 1) {
      iVar1 = FUN_00587a77(7,0);
      if (iVar1 == 0) {
        FUN_004a2fef(&DAT_0096587c);
        goto LAB_0058872e;
      }
    }
    iVar1 = *extraout_ECX;
    uVar3 = 0;
  }
  else {
    if ((iVar1 != 0x3ea) || (extraout_ECX[0x35] != 3)) goto LAB_00588737;
    iVar1 = *extraout_ECX;
    uVar3 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar3);
LAB_00588737:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


