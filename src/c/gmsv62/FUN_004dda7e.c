/* FUN_004dda7e - 0x004dda7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004dda7e(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = 0x20000000;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _memset(extraout_ECX + 1,0,0x504);
  (*DAT_0097b48c)(0x104,unaff_EBP + -0x114);
  (*DAT_0097b4b4)(unaff_EBP + -0x114,&DAT_009640e8);
  uVar1 = *(undefined2 *)(unaff_EBP + 8);
  *(undefined2 *)(extraout_ECX + 1) = 0x3e;
  *(undefined2 *)((int)extraout_ECX + 6) = uVar1;
  uVar2 = (*DAT_0097b4e0)();
  FUN_0087b200(extraout_ECX + 0xc2,uVar2);
  FUN_0087b200(extraout_ECX + 0x102,unaff_EBP + -0x114);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


