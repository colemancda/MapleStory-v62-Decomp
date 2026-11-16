/* FUN_50009c65 - 0x50009c65 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50009c65(uint param_1,int param_2,uint param_3,ushort *param_4,int param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int local_8;
  
  uVar3 = FUN_50004a0b(param_6);
  uVar1 = (ushort)uVar3;
  if (param_3 == 0) {
    if (0 < param_2) {
      local_8 = param_2;
      do {
        if (0 < (int)param_1) {
          param_3 = param_1;
          puVar5 = param_4;
          do {
            uVar2 = uVar1;
            if (((uVar3 & 0xf000) != 0xf000) && (uVar2 = *puVar5, (uVar3 & 0xf000) != 0)) {
              uVar4 = FUN_5000836d((uint)*puVar5,uVar3 & 0xffff,0xff);
              uVar2 = (ushort)uVar4;
            }
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        param_4 = (ushort *)((int)param_4 + param_5);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else if (0 < param_2) {
    do {
      if (0 < (int)param_1) {
        puVar5 = param_4;
        for (uVar3 = param_1 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(uint *)puVar5 = CONCAT22(uVar1,uVar1);
          puVar5 = puVar5 + 2;
        }
        for (uVar3 = (uint)((param_1 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        }
      }
      param_4 = (ushort *)((int)param_4 + param_5);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


