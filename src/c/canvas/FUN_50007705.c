/* FUN_50007705 - 0x50007705 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50007705(int param_1,uint *param_2,int param_3,undefined4 param_4,uint *param_5,int param_6,
            int param_7,uint *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int local_c;
  uint *local_8;
  
  puVar4 = param_5;
  if (param_3 == -1) {
    if ((param_7 == param_10) && (0 < param_7)) {
      if (0 < (int)param_2) {
        do {
          memcpy(param_5,param_8,param_1 << 2);
          param_5 = (uint *)((int)param_5 + param_6);
          param_8 = (uint *)((int)param_8 + param_9);
          param_2 = (uint *)((int)param_2 + -1);
        } while (param_2 != (uint *)0x0);
      }
    }
    else if (0 < (int)param_2) {
      param_5 = param_2;
      do {
        if (0 < param_1) {
          param_3 = param_1;
          puVar3 = puVar4;
          param_2 = param_8;
          do {
            uVar2 = *param_2;
            param_2 = param_2 + param_10;
            *puVar3 = uVar2;
            puVar3 = puVar3 + param_7;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        puVar4 = (uint *)((int)puVar4 + param_6);
        param_8 = (uint *)((int)param_8 + param_9);
        param_5 = (uint *)((int)param_5 + -1);
      } while (param_5 != (uint *)0x0);
    }
  }
  else if (param_3 == 0xff) {
    if (0 < (int)param_2) {
      local_8 = param_2;
      do {
        if (0 < param_1) {
          param_3 = param_1;
          puVar4 = param_8;
          puVar3 = param_5;
          do {
            uVar2 = *puVar4;
            if ((uVar2 & 0xff000000) != 0xff000000) {
              if ((uVar2 & 0xff000000) == 0) {
                uVar2 = *puVar3;
              }
              else {
                uVar2 = FUN_500078f7(*puVar3,uVar2,0xff);
              }
            }
            puVar4 = puVar4 + param_10;
            *puVar3 = uVar2;
            puVar3 = puVar3 + param_7;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        param_8 = (uint *)((int)param_8 + param_9);
        local_8 = (uint *)((int)local_8 + -1);
      } while (local_8 != (uint *)0x0);
    }
  }
  else if (param_3 == -2) {
    if (0 < (int)param_2) {
      param_3 = (int)param_2;
      do {
        if (0 < param_1) {
          param_2 = (uint *)param_1;
          puVar4 = param_5;
          puVar3 = param_8;
          do {
            uVar2 = *puVar4;
            uVar1 = *puVar3;
            uVar5 = uVar2 - uVar1;
            puVar3 = puVar3 + param_10;
            *puVar4 = -(uint)(uVar1 < uVar2) & ((uVar5 ^ uVar2) & 0xffffff ^ uVar5);
            puVar4 = puVar4 + param_7;
            param_2 = (uint *)((int)param_2 + -1);
          } while (param_2 != (uint *)0x0);
        }
        param_5 = (uint *)((int)param_5 + param_6);
        param_8 = (uint *)((int)param_8 + param_9);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (0 < (int)param_2) {
    local_8 = param_2;
    do {
      if (0 < param_1) {
        local_c = param_1;
        puVar4 = param_5;
        param_2 = param_8;
        do {
          uVar2 = FUN_500078f7(*puVar4,*param_2,param_3);
          *puVar4 = uVar2;
          puVar4 = puVar4 + param_7;
          param_2 = param_2 + param_10;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      param_5 = (uint *)((int)param_5 + param_6);
      param_8 = (uint *)((int)param_8 + param_9);
      local_8 = (uint *)((int)local_8 + -1);
    } while (local_8 != (uint *)0x0);
  }
  return;
}


