/* FUN_0080cd3b - 0x0080cd3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080cd3b(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x5c4);
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar3 = (undefined4 *)FUN_0080ce91();
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *puVar3 = 3;
  FUN_004184ca(uVar2,0xffffffff);
  piVar1 = (int *)(extraout_ECX + 0x5c8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x5c4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


