/* FUN_51805e61 - 0x51805e61 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint __thiscall
FUN_51805e61(void *this,uint param_1,LPCSTR param_2,int param_3,DWORD param_4,DWORD param_5,
            uint param_6,DWORD param_7)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID pvVar3;
  DWORD DVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 local_2c [28];
  uint local_10;
  uint local_8;
  
  iVar1 = FUN_5180602f(this,0);
  if (iVar1 == 0) {
    param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
  }
  uVar5 = *(uint *)((int)this + 0x34) & 2;
  if (*(int *)((int)this + 0x10) == -1) {
    if ((param_7 == 0) && (param_6 < param_1)) {
      param_6 = param_1;
      param_7 = 0;
    }
    uVar5 = 1;
  }
  (*DAT_5181fb10)(local_2c);
  uVar7 = __aullrem(param_4,param_5,local_10,0);
  local_8 = (uint)uVar7;
  bVar6 = param_4 < local_8;
  param_4 = param_4 - local_8;
  pvVar2 = *(HANDLE *)((int)this + 0x14);
  param_5 = param_5 - bVar6;
  if (pvVar2 == (HANDLE)0x0) {
    if (param_3 == 3) {
      if (param_2 != (LPCSTR)0x0) {
        pvVar2 = OpenFileMappingA((-(uint)(uVar5 != 0) & 0xf001b) + 4,0,param_2);
        *(HANDLE *)((int)this + 0x14) = pvVar2;
        if (pvVar2 == (HANDLE)0x0) {
          return 0;
        }
      }
    }
    else {
      pvVar2 = CreateFileMappingA(*(HANDLE *)((int)this + 0x10),(LPSECURITY_ATTRIBUTES)0x0,
                                  (-(uint)(uVar5 != 0) & 2) + 2,param_7,param_6,param_2);
      *(HANDLE *)((int)this + 0x14) = pvVar2;
      if (((pvVar2 != (HANDLE)0x0) && (param_3 == 1)) && (iVar1 = (*DAT_5181fad4)(), iVar1 == 0xb7))
      {
        (*DAT_5181f9c0)(*(undefined4 *)((int)this + 0x14));
        (*DAT_5181fad8)(0xb7);
        *(undefined4 *)((int)this + 0x14) = 0;
        return 0;
      }
    }
    pvVar2 = *(HANDLE *)((int)this + 0x14);
    if (pvVar2 == (HANDLE)0x0) {
      param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
  }
  pvVar3 = MapViewOfFile(pvVar2,(-(uint)(uVar5 != 0) & 0xf001b) + 4,param_5,param_4,param_1);
  *(LPVOID *)((int)this + 0x18) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    FUN_5180602f(this,1);
    return local_8;
  }
  *(DWORD *)((int)this + 0x20) = param_4;
  *(DWORD *)((int)this + 0x24) = param_5;
  uVar5 = param_6;
  DVar4 = param_7;
  if ((param_7 == 0) && (param_6 < param_1)) {
    uVar5 = param_1;
    DVar4 = 0;
  }
  DVar4 = DVar4 + param_5 + (uint)CARRY4(uVar5,param_4);
  *(uint *)((int)this + 0x28) = uVar5 + param_4;
  *(DWORD *)((int)this + 0x2c) = DVar4;
  if ((param_4 == *(DWORD *)((int)this + 0x28)) && (param_5 == DVar4)) {
    uVar7 = (**(code **)(*(int *)this + 0x3c))();
    *(undefined8 *)((int)this + 0x28) = uVar7;
  }
  else {
    uVar7 = (**(code **)(*(int *)this + 0x3c))();
    if ((*(int *)((int)this + 0x28) != (int)uVar7) ||
       (*(int *)((int)this + 0x2c) != (int)((ulonglong)uVar7 >> 0x20))) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffb;
      goto LAB_51806022;
    }
  }
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 4;
LAB_51806022:
  return *(int *)((int)this + 0x18) + local_8;
}


