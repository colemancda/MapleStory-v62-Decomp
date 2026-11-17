/* FUN_00763792 - 0x00763792 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00763792(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x60c) != 0) {
    FUN_0043fd71();
  }
  if (*(int *)(param_1 + 0x614) != 0) {
    FUN_0043fd71();
  }
  iVar2 = *(int *)(param_1 + 0x570);
  if (((iVar2 == 0) && (*(int *)(param_1 + 0x6b4) == 0)) && (*(int *)(param_1 + 0x6b8) == 0)) {
    piVar1 = (int *)(param_1 + 0x6bc);
    *piVar1 = *piVar1 + -0x1e;
    if (*piVar1 < 0) {
      if (*(int *)(param_1 + 0x5e4) != 0) {
        FUN_00815de9();
        FUN_00766bbf();
      }
      goto LAB_0076383c;
    }
  }
  if ((iVar2 != 1) && (*(int *)(param_1 + 0x6b4) == 0)) {
    piVar1 = (int *)(param_1 + 0x6bc);
    *piVar1 = *piVar1 + -0x1e;
    if (*piVar1 < 0) {
      if (*(int *)(param_1 + 0x5e4) == 0) {
        return;
      }
      FUN_00815de9();
      FUN_00766bbf();
      return;
    }
  }
  if (iVar2 == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x6b8) != 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x6bc);
  *piVar1 = *piVar1 + -0x1e;
  if (-1 < *piVar1) {
    return;
  }
LAB_0076383c:
  if (*(int *)(param_1 + 0x5ec) != 0) {
    FUN_00815de9();
    FUN_00766bd5();
  }
  return;
}


