/* FUN_50806999 - 0x50806999 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __cdecl FUN_50806999(int *param_1,void *param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    psVar5 = (short *)0x0;
  }
  else {
    psVar5 = (short *)*piVar2;
  }
  if ((psVar5 != (short *)0x0) && (sVar1 = *psVar5, sVar1 != 0)) {
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*piVar2 + -4) >> 1;
    }
    psVar4 = psVar5 + (uVar3 - 1);
    if ((psVar5[uVar3 - 1] == 0x2f) || (psVar5[uVar3 - 1] == 0x5c)) {
      psVar4 = psVar4 + -1;
    }
    if (psVar5 <= psVar4) {
      do {
        if ((*psVar4 == 0x2f) || (*psVar4 == 0x5c)) break;
        psVar4 = psVar4 + -1;
      } while (psVar5 <= psVar4);
      if ((psVar5 <= psVar4) && ((psVar5 + 1 != psVar4 || ((sVar1 != 0x2f && (sVar1 != 0x5c)))))) {
        FUN_50803a6e(psVar5,(int)psVar4 + (2 - (int)psVar5) >> 1);
        FUN_50803d00();
        FUN_50803d5b(param_2,(int *)&param_1);
        if (param_1 != (int *)0x0) {
          FUN_508040b6(param_1);
        }
        return 1;
      }
    }
  }
  return 0;
}


