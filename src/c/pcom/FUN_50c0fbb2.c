/* FUN_50c0fbb2 - 0x50c0fbb2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


ushort * __cdecl FUN_50c0fbb2(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  if (param_1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  uVar2 = *param_1;
  puVar5 = param_1;
  puVar1 = param_1;
  while (uVar2 != 0) {
    uVar2 = *puVar1;
    puVar4 = puVar1 + 1;
    if (uVar2 == 0x25) {
      if (*puVar4 == 0x25) {
        puVar4 = puVar1 + 2;
      }
      else {
        uVar3 = FUN_50c0fc20(puVar4);
        uVar2 = (ushort)uVar3;
        if (uVar2 != 0) {
          puVar4 = puVar1 + 3;
        }
      }
    }
    else if (uVar2 == 0x2b) {
      uVar2 = 0x20;
    }
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    uVar2 = *puVar4;
  }
  FUN_50c099d9((int *)&param_1,0,(int)puVar5 - (int)param_1 >> 1);
  return param_1;
}


