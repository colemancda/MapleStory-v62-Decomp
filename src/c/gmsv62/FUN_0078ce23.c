/* FUN_0078ce23 - 0x0078ce23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0078ce23(int param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x964) + 4))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004c2648();
    if ((*piVar2 / 10000 == 0xbe) || (*piVar2 / 10000 == 0xc1)) {
      return 1;
    }
  }
  return 0;
}


