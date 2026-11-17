/* FUN_00569d96 - 0x00569d96 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00569d96(void)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = 0x569dad;
  bVar1 = FUN_0042452b();
  iStack_1c = 0x569db7;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\0') {
    uStack_2c = 0;
    if (DAT_0097943c != 0) {
      iStack_1c = 0x569e72;
      FUN_00815de9();
      uStack_2c = extraout_ECX;
      if (DAT_0097943c != 0) {
        iStack_1c = 1;
        uStack_20 = 0x569e84;
        (*(code *)**(undefined4 **)(DAT_0097943c + 8))();
        uStack_2c = extraout_ECX_00;
      }
    }
    iStack_1c = 0;
    uStack_20 = 1;
    puStack_24 = (undefined1 *)0x0;
    uStack_28 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
    FUN_0045f0f3(s_Try_Again__0096572c,0xffffffff);
    FUN_007db3ad();
  }
  else {
    *(uint *)(DAT_00978368 + 0x202c) = (uint)bVar1;
    if (DAT_0097943c != 0) {
      iStack_1c = 0x569de0;
      FUN_00815de9();
      if (DAT_0097943c != 0) {
        iStack_1c = 1;
        uStack_20 = 0x569df2;
        (*(code *)**(undefined4 **)(DAT_0097943c + 8))();
      }
    }
    iStack_1c = 0;
    uStack_20 = 0;
    puStack_24 = (undefined1 *)0x9;
    uStack_28 = 0x569dfe;
    FUN_0060142b();
    iStack_1c = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x569e0b;
    FUN_00457cda();
    iStack_1c = 1;
    uStack_20 = 0x569e15;
    FUN_00457cda();
    iStack_1c = *(int *)(DAT_00978368 + 0x2028);
    uStack_20 = 0x569e28;
    FUN_00457d37();
    *(int **)(unaff_EBP + 8) = &iStack_1c;
    uStack_20 = 0xffffffff;
    puStack_24 = &DAT_00978474;
    iStack_1c = 0;
    uStack_28 = 0x569e3c;
    FUN_00414edd();
    uStack_20 = 0x569e44;
    FUN_00459cb5();
    iStack_1c = unaff_EBP + -0x1c;
    uStack_20 = 0x569e53;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x569e5f;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


