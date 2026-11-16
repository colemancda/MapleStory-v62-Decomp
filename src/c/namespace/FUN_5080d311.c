/* FUN_5080d311 - 0x5080d311 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


wchar_t * __thiscall FUN_5080d311(void *this,wchar_t *param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  size_t *psVar4;
  int *piVar5;
  wchar_t *pwVar6;
  
  if ((*(int **)this == (int *)0x0) || (iVar3 = **(int **)this, iVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar1 == 0) {
    FUN_508050d0();
    FUN_50803e96((int *)&param_1);
    FUN_508052b4(this);
    *(wchar_t **)this = param_1;
    pwVar6 = param_1;
  }
  else {
    if (param_1 == (wchar_t *)0x0) {
      return this;
    }
    sVar2 = wcslen(param_1);
    piVar5 = *(int **)this;
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*piVar5 + -4) >> 1;
    }
    if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar5;
    }
    psVar4 = FUN_50803a6e(iVar3,uVar1 + sVar2);
    if (psVar4 == (size_t *)0x0) {
      FUN_5080dfed(0x8007000e);
    }
    if ((*(int **)this == (int *)0x0) || (iVar3 = **(int **)this, iVar3 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar3 + -4) >> 1;
    }
    memcpy((void *)((int)psVar4 + uVar1 * 2),param_1,sVar2 * 2);
    piVar5 = FUN_50803d00();
    param_1 = (wchar_t *)*piVar5;
    if (param_1 != (wchar_t *)0x0) {
      InterlockedIncrement((LONG *)(param_1 + 4));
    }
    FUN_50803d5b(this,(int *)&param_1);
    pwVar6 = this;
    if (param_1 != (wchar_t *)0x0) {
      FUN_508040b6((int *)param_1);
      param_1 = (wchar_t *)0x0;
    }
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_508040b6((int *)pwVar6);
  }
  return this;
}


