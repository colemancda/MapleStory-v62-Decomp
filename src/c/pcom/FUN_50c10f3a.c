/* FUN_50c10f3a - 0x50c10f3a in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


short * __cdecl FUN_50c10f3a(int *param_1)

{
  short sVar1;
  size_t *psVar2;
  short *psVar3;
  short *psVar4;
  
  if (*param_1 == 0) {
LAB_50c10fc1:
    psVar3 = (short *)0x0;
  }
  else {
    while( true ) {
      do {
        while( true ) {
          sVar1 = *(short *)*param_1;
          if ((sVar1 != 0xd) && (sVar1 != 10)) break;
          *param_1 = (int)((short *)*param_1 + 1);
        }
        psVar3 = (short *)*param_1;
        psVar4 = psVar3;
        if (*psVar3 == 0) goto LAB_50c10fc1;
        for (; ((sVar1 = *psVar4, sVar1 != 0 && (sVar1 != 0xd)) && (sVar1 != 10));
            psVar4 = psVar4 + 1) {
        }
        psVar2 = FUN_50c02a35(psVar3,(int)psVar4 - (int)psVar3 >> 1);
        psVar3 = FUN_50c10ec1((short *)psVar2);
        *param_1 = (int)psVar4;
      } while (psVar3 == (short *)0x0);
      sVar1 = *psVar3;
      if (((sVar1 != 0) && (sVar1 != 0x23)) && ((sVar1 != 0x2f && (sVar1 != 0x27)))) break;
      (*DAT_50c211e8)(psVar3 + -2);
    }
  }
  return psVar3;
}


