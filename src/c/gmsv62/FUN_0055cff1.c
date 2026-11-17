/* FUN_0055cff1 - 0x0055cff1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055cff1(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar2;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = (int *)(extraout_ECX + 0x14);
  if (*piVar2 == 0) {
    iVar1 = FUN_00402aea(0x1d8,0x10);
    *piVar2 = iVar1;
  }
  *piVar2 = *(int *)*piVar2;
  piVar2 = (int *)(extraout_ECX + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


