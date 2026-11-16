/* FUN_50806a56 - 0x50806a56 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_50806a56(int *param_1,void *param_2)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  
  piVar2 = param_1;
  psVar1 = (short *)*param_1;
  for (psVar3 = psVar1; (*psVar3 != 0 && (*psVar3 != 0x2f)); psVar3 = psVar3 + 1) {
  }
  FUN_50803a6e(psVar1,(int)psVar3 - (int)psVar1 >> 1);
  FUN_50803d00();
  FUN_50803d5b(param_2,(int *)&param_1);
  if (param_1 != (int *)0x0) {
    FUN_508040b6(param_1);
  }
  if (*psVar3 != 0) {
    psVar3 = psVar3 + 1;
  }
  *piVar2 = (int)psVar3;
  return;
}


