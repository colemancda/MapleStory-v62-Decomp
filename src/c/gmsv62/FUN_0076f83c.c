/* FUN_0076f83c - 0x0076f83c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f83c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x24);
  iVar1 = *(int *)(iVar3 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    iStack_68 = unaff_EBP + -0x68;
    iStack_6c = *(undefined4 *)(iVar3 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_70 = 0x76f888;
    FUN_0076fa45();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_68 = 0xf86;
    iStack_6c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_70 = 0x76f8a2;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_68 = *(undefined4 *)(unaff_EBP + -100);
    iStack_6c = *puVar2;
    iStack_70 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_74 = 0x76f8b5;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_68 = 0x76f8c4;
    FUN_00414ebb();
    iStack_68 = 0;
    iStack_6c = 0;
    iStack_70 = 0;
    uStack_74 = 0;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_78;
    FUN_00450368(unaff_EBP + -0x10);
    iVar3 = FUN_007db791();
    if (iVar3 == 6) {
      iStack_68 = unaff_EBP + -100;
      iStack_6c = 0x76f901;
      FUN_00429303();
      iStack_6c = 0x76f908;
      FUN_004ea1d6();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_68 = 0x76f913;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 4;
    }
    else {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_68 = 0x76f8ef;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    iStack_68 = 0x76f922;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_68 = 0x76f92e;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


