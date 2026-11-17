/* FUN_0065869b - 0x0065869b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065869b(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 uVar5;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  FUN_0045b90e(unaff_EBP + -0x14);
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
  }
  if (iVar3 < *(int *)(extraout_ECX + 0x74)) {
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x339);
    uVar6 = *puVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uVar1 = *(undefined4 *)(extraout_ECX + 0x74);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar2 = (undefined4 *)FUN_00434e21(unaff_EBP + -0x10,uVar6,uVar1);
    uVar6 = *puVar2;
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar6);
    iVar3 = iVar3 + 0x2c;
    iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar3);
    FUN_0074d755(iVar4 + 0x42,iVar3,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iVar3 = (*DAT_0097b704)();
    *(int *)(extraout_ECX + 0x564) = iVar3 + 5000;
    if (iVar3 + 5000 == 0) {
      *(int *)(extraout_ECX + 0x564) = 1;
    }
  }
  else {
    uVar5 = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


