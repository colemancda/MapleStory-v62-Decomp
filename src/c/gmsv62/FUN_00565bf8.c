/* FUN_00565bf8 - 0x00565bf8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00565bf8(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x144) == 0) {
    *(undefined4 *)(extraout_ECX + 0x144) = 1;
    FUN_0060142b(2,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(0);
    FUN_00457cda(0);
    FUN_004751b2(unaff_EBP + -0x20);
    FUN_00414edd(s_GuestID_009656c8,0xffffffff);
    iVar2 = FUN_004029b9(0x88);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00565ceb(extraout_ECX);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0056a627(uVar1);
    iVar2 = FUN_004bc6a2();
    if (iVar2 != 1) {
      FUN_0058ae08(1);
      *(undefined4 *)(extraout_ECX + 0x144) = 0;
    }
    FUN_0056a790();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


