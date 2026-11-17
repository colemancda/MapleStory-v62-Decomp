/* FUN_0065877e - 0x0065877e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065877e(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0x30))(uVar3);
  iVar1 = iVar1 + 0x2c;
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
  FUN_0074d755(iVar2 + 0x42,iVar1,uVar3);
  iVar1 = (*DAT_0097b704)();
  *(int *)(extraout_ECX + 0x564) = iVar1 + 5000;
  if (iVar1 + 5000 == 0) {
    *(int *)(extraout_ECX + 0x564) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


