/* FUN_00505ec1 - 0x00505ec1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00505ec1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar3;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008eaa40;
  extraout_ECX[-2] = &PTR_FUN_008ea9f4;
  extraout_ECX[-1] = &PTR_FUN_008ea9f0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea9ec;
  bVar3 = DAT_00979274 != 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (bVar3) {
    FUN_00815de9();
    if (DAT_00979274 != 0) {
      (*(code *)**(undefined4 **)(DAT_00979274 + 8))(1);
    }
  }
  if (DAT_00978358 != 0) {
    FUN_007b02be();
  }
  iVar1 = DAT_00978368;
  *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(iVar1 + 0x2090) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0050732c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0050732c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0050732c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


