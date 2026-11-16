/* FUN_500108da - 0x500108da in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


short * FUN_500108da(short *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  
  uVar1 = FUN_50007154(param_2);
  *param_3 = uVar1;
  uVar1 = 0;
  uVar2 = FUN_50007154(param_2);
  psVar3 = param_1;
  if (uVar2 == 0) {
    return param_1;
  }
  while( true ) {
    if (*psVar3 == 0x2f) {
      return param_1;
    }
    if (*psVar3 == 0x5c) break;
    uVar1 = uVar1 + 1;
    uVar2 = FUN_50007154(param_2);
    psVar3 = psVar3 + 1;
    if (uVar2 <= uVar1) {
      return param_1;
    }
  }
  uVar2 = FUN_50007154(param_2);
  if (uVar2 <= uVar1) {
    return param_1;
  }
  psVar3 = param_1 + uVar1 + 2;
  while ((((uVar2 = FUN_50007154(param_2), uVar2 - 5 <= uVar1 ||
           ((psVar3[-2] != 0x44 && (psVar3[-2] != 100)))) ||
          ((psVar3[-1] != 0x41 && (psVar3[-1] != 0x61)))) ||
         ((((*psVar3 != 0x54 && (*psVar3 != 0x74)) || ((psVar3[1] != 0x41 && (psVar3[1] != 0x61))))
          || (psVar3[2] != 0x5c))))) {
    uVar1 = uVar1 + 1;
    psVar3 = psVar3 + 1;
    uVar2 = FUN_50007154(param_2);
    if (uVar2 <= uVar1) {
      return param_1;
    }
  }
  uVar1 = uVar1 + 5;
  psVar3 = param_1 + uVar1;
  uVar2 = FUN_50007154(param_2);
  *param_3 = uVar2 - uVar1;
  uVar2 = FUN_50007154(param_2);
  if (uVar2 <= uVar1) {
    return psVar3;
  }
  psVar4 = param_1 + uVar1;
  do {
    if (*psVar4 == 0x5c) {
      *psVar4 = 0x2f;
    }
    uVar1 = uVar1 + 1;
    psVar4 = psVar4 + 1;
    uVar2 = FUN_50007154(param_2);
  } while (uVar1 < uVar2);
  return psVar3;
}


