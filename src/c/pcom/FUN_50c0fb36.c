/* FUN_50c0fb36 - 0x50c0fb36 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c0fb36(undefined4 param_1,int *param_2,short *param_3,byte param_4)

{
  short sVar1;
  short sVar2;
  size_t *psVar3;
  short *psVar4;
  short *psVar5;
  
  psVar5 = param_3;
  if ((param_4 & 1) == 0) {
    psVar5 = (short *)*param_2;
    sVar1 = *psVar5;
    while (sVar1 != 0) {
      sVar2 = *param_3;
      psVar4 = param_3;
      while (sVar2 != 0) {
        sVar2 = *psVar4;
        psVar4 = psVar4 + 1;
        if (sVar1 == sVar2) goto LAB_50c0fb7f;
        sVar2 = *psVar4;
      }
      psVar4 = psVar5 + 1;
      psVar5 = psVar5 + 1;
      sVar1 = *psVar4;
    }
  }
LAB_50c0fb7f:
  psVar3 = FUN_50c02a35(*param_2,(int)psVar5 - *param_2 >> 1);
  if ((param_4 & 2) != 0) {
    FUN_50c0fbb2((ushort *)psVar3);
  }
  *param_2 = (int)psVar5;
  FUN_50c05e8d();
  return param_1;
}


