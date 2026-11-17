/* FUN_0068e8ee - 0x0068e8ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068e8ee(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00879bb8();
  uStack_20 = 0;
  uStack_24 = 0;
  iStack_28 = extraout_ECX + 0x6c;
  uStack_2c = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_30;
  FUN_00679d22(&uStack_30,0x1ab);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    *(undefined4 *)(extraout_ECX + 0x1ac) = 1;
    uStack_20 = 0;
    uStack_24 = 0x68e944;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x184) + 4) + 0x1c))();
    uStack_24 = 0;
    iStack_28 = 0x68e953;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x18c) + 4) + 0x1c))();
    iStack_28 = 0;
    uStack_2c = 0x68e95b;
    FUN_008161f1();
    iStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0x6f;
    FUN_0060142b();
    iStack_28 = 0x10;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_2c = 0x68e974;
    FUN_00457cda();
    iStack_28 = unaff_EBP + -0x20;
    uStack_2c = 0x68e983;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_28 = 0x68e98f;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


