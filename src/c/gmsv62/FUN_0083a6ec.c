/* FUN_0083a6ec - 0x0083a6ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083a6ec(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004becbc(*(undefined4 *)(unaff_EBP + 8),0);
  if (iVar1 != 0) {
    FUN_0060142b(0x27,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045d247(0xffff);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(extraout_ECX + 0x208c) = 1;
    uVar2 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x2090) = uVar2;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


