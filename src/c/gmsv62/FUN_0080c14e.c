/* FUN_0080c14e - 0x0080c14e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080c14e(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x5e0) == 0) {
    EnableWindow(*(HWND *)(extraout_ECX + 0x598),0);
    *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x5c4);
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar2 = (undefined4 *)FUN_0080ce91();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar2 = 1;
    piVar1 = (int *)(extraout_ECX + 0x5c8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x5c4) = 0;
    }
    FUN_00814891(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


