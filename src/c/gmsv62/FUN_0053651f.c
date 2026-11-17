/* FUN_0053651f - 0x0053651f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0053651f(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x31] = 0;
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008eb840;
  extraout_ECX[1] = &PTR_FUN_008eb7f4;
  extraout_ECX[2] = &PTR_FUN_008eb7f0;
  extraout_ECX[0x32] = uVar3;
  extraout_ECX[0x33] = uVar1;
  FUN_004bc5b8(0,0,1,0);
  iVar2 = FUN_004c24cb(uVar1);
  if (iVar2 != 0) {
    FUN_0087a1b0();
    *(undefined4 *)(unaff_EBP + 0x10) = extraout_ECX[0x2f];
    uVar3 = FUN_0087b818(1,&stack0xfffffff0,10);
    FUN_004a2fef(uVar3);
    (**(code **)(*(int *)(extraout_ECX[0x2f] + 4) + 0x1c))(0);
  }
  iVar2 = extraout_ECX[0x32];
  extraout_ECX[0x1d] = *(undefined4 *)(iVar2 + 0x1d4c);
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = *(undefined4 *)(iVar2 + 0x1d50);
  extraout_ECX[0x21] = *(undefined4 *)(iVar2 + 0x1d54);
  extraout_ECX[0x23] = *(undefined4 *)(iVar2 + 0x1d5c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x22] = *(undefined4 *)(iVar2 + 0x1d58);
  return extraout_ECX;
}


