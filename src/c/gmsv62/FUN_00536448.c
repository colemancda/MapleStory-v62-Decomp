/* FUN_00536448 - 0x00536448 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00536448(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    local_14 = *(undefined4 *)(extraout_ECX + 0x70);
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_18;
    iStack_1c = 0x536476;
    FUN_005379ae();
    iStack_1c = *(undefined4 *)(extraout_ECX + 0xb0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x536485;
    iVar1 = FUN_00537942();
    uStack_20 = 1;
    uStack_24 = iStack_1c;
    uStack_28 = iStack_1c;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
    iStack_1c = (-(uint)(iVar1 != 0) & 0xffffff9d) + 100;
    FUN_00537987(extraout_ECX + 0x9c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00532516();
    if (iVar1 == 0) goto LAB_0053650f;
    local_14 = *(undefined4 *)(extraout_ECX + 0x70);
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_18;
    iStack_1c = 0x5364c7;
    FUN_005379ae();
    iStack_1c = 0x7fffffff;
    uStack_20 = 1;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00537987(extraout_ECX + 0x94);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00532516();
    if (iVar1 == 0) goto LAB_0053650f;
  }
  if (*(int *)(extraout_ECX + 0x68) == 0) {
    *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x68) = 1;
    if (*(int *)(extraout_ECX + 0x14) != 0) {
      local_14 = 0x53650f;
      FUN_00815de9();
    }
  }
LAB_0053650f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


