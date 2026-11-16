/* FUN_50c110ea - 0x50c110ea in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


short * __cdecl FUN_50c110ea(short *param_1)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  short *psVar4;
  
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    bVar2 = false;
    psVar3 = param_1;
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      if (bVar2) {
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        bVar2 = false;
      }
      else if (sVar1 == 0x5c) {
        bVar2 = true;
      }
      else {
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
      }
      psVar4 = psVar4 + 1;
    } while (*psVar4 != 0);
    FUN_50c099d9((int *)&param_1,0,(int)psVar3 - (int)param_1 >> 1);
  }
  return param_1;
}


