/* FUN_00748954 - 0x00748954 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00748954(int *param_1,wchar_t *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  
  uVar4 = 0;
  if (param_2 == (wchar_t *)0x0) {
    param_2 = u__0096470c;
  }
  if ((((short *)*param_1 != (short *)0x0) && (sVar1 = *(short *)*param_1, sVar1 != 0)) &&
     (iVar2 = FUN_0087b57c(param_2,sVar1), iVar2 != 0)) {
    psVar3 = (short *)FUN_0041903e(0,1);
    psVar5 = psVar3;
    do {
      psVar5 = psVar5 + 1;
      if (*psVar5 == 0) break;
      iVar2 = FUN_0087b57c(param_2,*psVar5);
    } while (iVar2 != 0);
    iVar2 = *param_1;
    if (*psVar5 == 0) {
      *(undefined4 *)(iVar2 + -0xc) = 1;
      *(undefined2 *)*param_1 = 0;
      *(undefined4 *)(iVar2 + -4) = 0;
      FUN_00419015();
    }
    else {
      if (iVar2 != 0) {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      iVar2 = (int)psVar5 - (int)psVar3 >> 1;
      FUN_0087a3a0(psVar3,psVar5,(iVar2 * 0x7fffffff + uVar4) * 2);
      FUN_004190dc(uVar4 - iVar2);
    }
  }
  return param_1;
}


