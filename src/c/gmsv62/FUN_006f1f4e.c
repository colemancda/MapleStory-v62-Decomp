/* FUN_006f1f4e - 0x006f1f4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f1f4e(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x5e0) == 0) {
    iVar1 = FUN_004029b9(0x560);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(uVar2);
      uVar2 = FUN_006f1fe4(extraout_ECX,iVar1 + 0x9d,uVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_006f2e29(uVar2);
  }
  else {
    FUN_00815de9();
    FUN_006f2ec0();
    FUN_006f2ec0();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


