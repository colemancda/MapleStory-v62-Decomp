/* FUN_006ad7df - 0x006ad7df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006ad7df(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(0x14,0,0xffffffff,0xffffffff,0,0,0);
  DAT_0097bcf8 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  piVar1 = extraout_ECX + 0x15c;
  uVar2 = extraout_ECX[0x155];
  extraout_ECX[0x15f] = 0;
  *extraout_ECX = &PTR_LAB_008ef6f0;
  extraout_ECX[1] = &PTR_FUN_008ef6a4;
  extraout_ECX[2] = &PTR_FUN_008ef6a0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0047c974(uVar2,unaff_EBP + -0x10,unaff_EBP + -0x14,piVar1);
  if ((*piVar1 < 0) || (2 < *piVar1)) {
    *piVar1 = 0;
  }
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),0,0,10,1,0,1);
  if (*piVar1 == 0) {
    extraout_ECX[7] = 0x52;
    extraout_ECX[8] = 10;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0x14 - extraout_ECX[7]) {
    *(int *)(unaff_EBP + -0x10) = 0x14 - extraout_ECX[7];
  }
  if (*(int *)(unaff_EBP + -0x14) < 0x14 - extraout_ECX[8]) {
    *(int *)(unaff_EBP + -0x14) = 0x14 - extraout_ECX[8];
  }
  if (0x30c < *(int *)(unaff_EBP + -0x10)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x30c;
  }
  if (0x244 < *(int *)(unaff_EBP + -0x14)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x244;
  }
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


