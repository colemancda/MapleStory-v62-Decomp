/* FUN_50c0fd6b - 0x50c0fd6b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


size_t * __cdecl FUN_50c0fd6b(short *param_1,short *param_2)

{
  uint uVar1;
  short *psVar2;
  size_t *psVar3;
  short sVar4;
  
  uVar1 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    uVar1 = *(uint *)(param_1 + -2);
    FUN_50c10310();
    memcpy(&stack0xfffffff0,param_1,uVar1);
    uVar1 = uVar1 & 0xfffffffe;
    psVar2 = (short *)(&stack0xffffffee + uVar1);
    if (param_2 == (short *)0x0) {
      param_2 = &DAT_50c21438;
    }
    if (*psVar2 != 0x2f) {
      psVar2 = (short *)(&stack0xfffffff0 + uVar1);
      *psVar2 = 0x2f;
    }
    do {
      sVar4 = *param_2;
      if (sVar4 == 0) {
        uVar1 = ((int)psVar2 - (int)&stack0xfffffff0 >> 1) + 1;
        param_2 = (short *)&stack0xfffffff0;
        goto LAB_50c0fe4f;
      }
      if (sVar4 == 0x2f) {
        return (size_t *)0x0;
      }
      if (sVar4 == 0x2e) {
        if (param_2[1] == 0x2e) {
          if (param_2[2] != 0x2f) {
            return (size_t *)0x0;
          }
          psVar2 = psVar2 + -1;
          if (psVar2 < &stack0xfffffff0) {
            return (size_t *)0x0;
          }
          do {
            if (*psVar2 == 0x2f) break;
            psVar2 = psVar2 + -1;
          } while (&stack0xfffffff0 <= psVar2);
          param_2 = param_2 + 3;
          if (psVar2 < &stack0xfffffff0) {
            return (size_t *)0x0;
          }
        }
        else {
          if (param_2[1] != 0x2f) {
            return (size_t *)0x0;
          }
          param_2 = param_2 + 2;
        }
      }
      else {
        while (sVar4 != 0) {
          psVar2 = psVar2 + 1;
          param_2 = param_2 + 1;
          *psVar2 = sVar4;
          if (sVar4 == 0x2f) break;
          sVar4 = *param_2;
        }
      }
    } while( true );
  }
  if (param_2 != (short *)0x0) {
    uVar1 = *(uint *)(param_2 + -2) >> 1;
  }
LAB_50c0fe4f:
  psVar3 = FUN_50c02a35(param_2,uVar1);
  return psVar3;
}


