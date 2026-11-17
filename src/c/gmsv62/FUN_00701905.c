/* FUN_00701905 - 0x00701905 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00701905(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x588);
  if (((-1 < iVar2) && (iVar2 < 3)) && (-1 < (int)*(uint *)(extraout_ECX + 0x58c))) {
    iVar2 = *(int *)(extraout_ECX + 0x5cc + iVar2 * 4);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar2 + -4);
    }
    if (*(uint *)(extraout_ECX + 0x58c) < uVar1) goto LAB_0070194c;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
LAB_0070194c:
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_18 = 0x7019fd;
    FUN_00701a78();
  }
  else {
    if (*(int *)(extraout_ECX + 0x5dc) == 0) {
      iStack_18 = 0x5b8;
      uStack_1c = 0x70196f;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iStack_18 = 0;
      }
      else {
        iStack_18 = 0x701984;
        iStack_18 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
        uStack_1c = 0x70198c;
        uStack_1c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
        *(undefined1 **)(unaff_EBP + -0x10) = auStack_24;
        FUN_00705af6(extraout_ECX,1);
        iStack_18 = FUN_006faec1();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_1c = 0x7019b9;
      FUN_00705b89();
      *(undefined4 *)(extraout_ECX + 0x594) = 1;
      iStack_18 = 0x7019c6;
      FUN_00701a78();
    }
    iStack_18 = unaff_EBP + -0x14;
    uStack_1c = 0x7019d1;
    iVar2 = FUN_006fb663();
    iStack_18 = CONCAT22((short)((uint)*(undefined2 **)(iVar2 + 4) >> 0x10),
                         **(undefined2 **)(iVar2 + 4));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_1c = 0x7019e2;
    FUN_006fbf25();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_18 = 0;
      uStack_1c = 0x7019f4;
      FUN_00705e5b();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


