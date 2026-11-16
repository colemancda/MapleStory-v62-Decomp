/* FUN_51812c43 - 0x51812c43 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51812c43(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar4 = param_2;
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,&local_c,&local_14);
  if (-1 < iVar1) {
    param_2 = (int *)0x0;
    iVar1 = (**(code **)(*piVar4 + 0xc))(piVar4,&param_2);
    if (-1 < iVar1) {
      iVar1 = *param_1;
      piVar4 = param_2;
      uVar3 = __alldiv(local_14 - local_c,(local_10 - local_8) - (uint)(local_14 < local_c),10000000
                       ,0);
      uVar2 = (undefined4)uVar3;
      uVar3 = __alldiv(local_c,local_8,10000000,0);
      (**(code **)(iVar1 + 0x1c))(param_1,uVar3,uVar2,piVar4);
    }
  }
  return;
}


