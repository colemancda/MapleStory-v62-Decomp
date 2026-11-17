/* FUN_006a5d0e - 0x006a5d0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a5d0e(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 local_18;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    local_18 = 0xa8;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_18 = 0x6a5d56;
      FUN_004e21db();
      local_18 = 0x6a5d5d;
      uVar2 = FUN_00485c13();
      local_18 = 0;
      *(undefined4 **)(unaff_EBP + -0x14) = &local_18;
      FUN_00414edd(uVar2,0xffffffff);
      iVar1 = FUN_006a60c0(extraout_ECX[0x1d]);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar3 != 0) & uVar3 - 8;
    local_18 = 0x6a5da0;
    FUN_006a7d46();
    iVar1 = *extraout_ECX;
    local_18 = 2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    (**(code **)(iVar1 + 0x34))();
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      FUN_006a66f9(unaff_EBP + -0x10);
      FUN_0045df58(*(undefined4 *)(extraout_ECX[0x1d] + 0x4e4),*(undefined4 *)(unaff_EBP + -0x10));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_006a7d63();
  }
  else if (*(int *)(unaff_EBP + 8) == 2) {
    local_18 = 2;
    (**(code **)(*extraout_ECX + 0x34))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


