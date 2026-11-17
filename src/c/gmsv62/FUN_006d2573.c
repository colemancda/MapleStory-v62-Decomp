/* FUN_006d2573 - 0x006d2573 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d2573(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  if (DAT_009784c4 != 0) {
    FUN_0060142b(0x6e,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(2);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  uVar3 = *(undefined4 *)(extraout_ECX + 100);
  uVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar3);
  uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(uVar1);
  FUN_0047c9e1(8,uVar2,uVar1,uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


