/* FUN_0052b3e1 - 0x0052b3e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052b3e1(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x18) == 0) &&
     (iVar1 = *(int *)(unaff_EBP + 8), *(short *)(*(int *)(iVar1 + 4) + 0xc) == 0)) {
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_30;
    FUN_00679d22(auStack_30,0x1190);
    iVar2 = FUN_007db791();
    if (iVar2 == 6) {
      iStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0xd9;
      uStack_2c = 0x52b43c;
      FUN_0060142b();
      iStack_20 = 7;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_24 = 0x52b449;
      FUN_00457cda();
      iStack_20 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x20);
      uStack_24 = 0x52b457;
      FUN_00457d37();
      iStack_20 = unaff_EBP + -0x1c;
      uStack_24 = 0x52b466;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      iStack_20 = 0x52b479;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


