/* FUN_0052fbb1 - 0x0052fbb1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052fbb1(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = 0x52fbc8;
  iVar1 = FUN_0042459a();
  iStack_18 = 0x52fbd2;
  iVar2 = FUN_0042459a();
  if ((-1 < iVar1) && (0 < iVar2)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iStack_18 = 0x11be;
    iStack_1c = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x52fbf7;
    puVar3 = (undefined4 *)FUN_00679d22();
    uStack_20 = *puVar3;
    iStack_24 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_28 = 0x52fc09;
    iStack_1c = iVar2;
    iStack_18 = iVar1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_18 = 0x52fc17;
    FUN_00414ebb();
    iStack_18 = 0;
    iStack_1c = 0;
    uStack_20 = 0;
    iStack_24 = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_18 = 0x52fc3e;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


