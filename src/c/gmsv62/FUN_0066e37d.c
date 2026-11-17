/* FUN_0066e37d - 0x0066e37d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066e37d(double param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((param_2 == (int *)0x0) || (param_4 == 0)) {
    fVar3 = (float10)param_1;
  }
  else {
    iVar2 = *param_2;
    if (iVar2 == 0x20361e) {
      param_1 = param_1 * _DAT_008e89d0;
      fVar4 = (float10)FUN_0066e4a0(param_1,*(undefined4 *)(param_3 + 0x10),0x3ff0000000000000);
      fVar3 = (float10)FUN_0066e4a0(param_1,*(undefined4 *)(param_3 + 8),0x3ff0000000000000);
      fVar3 = fVar3 + (float10)(double)fVar4;
    }
    else if (iVar2 == 0x21bcbe) {
      param_1 = param_1 * _DAT_008e89d0;
      fVar4 = (float10)FUN_0066e4a0(param_1,*(undefined4 *)(param_3 + 0xc),0x3ff0000000000000);
      fVar3 = (float10)FUN_0066e4a0(param_1,*(undefined4 *)(param_3 + 4),0x3ff0000000000000);
      fVar3 = fVar3 + (float10)(double)fVar4;
    }
    else {
      if ((iVar2 == 0x2f785b) || (iVar2 == 0x30fefb)) {
        iVar2 = FUN_006509a1();
        iVar2 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
        fVar1 = (float)iVar2 * _DAT_008ed7c0;
      }
      else {
        fVar1 = 1.0;
      }
      fVar3 = (float10)FUN_0066e4a0(param_1,*(undefined4 *)(param_3 + param_2[4] * 4),(double)fVar1)
      ;
    }
  }
  return fVar3;
}


