/* FUN_0076309d - 0x0076309d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076309d(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xba8) == 0) {
    iVar1 = FUN_004029b9(0xa0);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(extraout_ECX + 0x63c);
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar3);
      iVar1 = iVar1 + (-(uint)(*(int *)(extraout_ECX + 0x618) != 0) & 0xa2) + 0x22;
      iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
      uVar3 = FUN_0076315a(iVar2 + 0x10e,iVar1,uVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00766b49(uVar3);
  }
  else if (*(int *)(extraout_ECX + 0x5f4) != 0) {
    FUN_00815de9();
    FUN_00766beb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)(extraout_ECX + 0xba8) = (uint)(*(int *)(extraout_ECX + 0xba8) == 0);
  return;
}


