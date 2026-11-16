/* FUN_5180b2f1 - 0x5180b2f1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180b2f1(int param_1)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  uint _Size;
  short *psVar3;
  short *psVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 local_1c [16];
  short *local_c [2];
  
  this = (int *)(param_1 + 0x6c);
  if ((((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(*(int *)(param_1 + 0x6c) + -4) == 0)) ||
      (*(int *)(param_1 + 0x78) == 0)) || (*(int *)(*(int *)(param_1 + 0x78) + -4) == 0)) {
    uVar6 = *(uint *)(*(int *)(param_1 + 100) + 0x18) >> 1;
    iVar1 = acmStreamSize(*(undefined4 *)(param_1 + 0x68),uVar6,local_c,1);
    if (iVar1 != 0) {
      FUN_51802c9b(local_1c,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_1c,(ThrowInfo *)&DAT_5181a2e0);
    }
    iVar1 = FUN_5180cd8d(this,uVar6,1);
    *(int *)(param_1 + 0x28) = iVar1;
    iVar1 = FUN_5180cd8d((void *)(param_1 + 0x78),(uint)local_c[0],1);
    *(int *)(param_1 + 0x18) = iVar1;
    uVar2 = 0;
    if (*this != 0) {
      uVar2 = *(undefined4 *)(*this + -4);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 100) + 0x1c);
    *(undefined4 *)(param_1 + 0x24) = 4;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  uVar6 = 0;
  if (iVar1 != 0) {
    uVar6 = *(uint *)(iVar1 + -4);
  }
  _Size = *(int *)(*(int *)(param_1 + 100) + 0x20) - (int)*(void **)(param_1 + 0x7c);
  if (uVar6 < _Size) {
    _Size = uVar6;
  }
  *(uint *)(param_1 + 0x1c) = _Size;
  memcpy(*(void **)(param_1 + 0x78),*(void **)(param_1 + 0x7c),_Size);
  if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x2c);
    iVar1 = acmStreamPrepareHeader
                      (*(undefined4 *)(param_1 + 0x68),-(uint)(param_1 != 0) & param_1 + 0xcU,0);
    if (iVar1 != 0) {
      FUN_51802c9b(local_1c,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_1c,(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  iVar1 = acmStreamConvert(*(undefined4 *)(param_1 + 0x68),-(uint)(param_1 != 0) & param_1 + 0xcU,
                           *(undefined4 *)(param_1 + 0x24));
  if (iVar1 < 0) {
    FUN_51802c9b(local_1c,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c,(ThrowInfo *)&DAT_5181a2e0);
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 4) {
    if (iVar1 != 0x14) {
      if (iVar1 == 0x20) {
        if (*(int *)(param_1 + 0x70) == 0) {
          *(undefined4 *)(param_1 + 0x80) = 8;
        }
      }
      else {
        if (iVar1 != 0x24) {
          FUN_51802c9b(local_1c,0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_1c,(ThrowInfo *)&DAT_5181a2e0);
        }
        if (*(int *)(param_1 + 0x70) == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0x20;
        }
      }
      goto LAB_5180b4e2;
    }
    *(undefined4 *)(param_1 + 0x24) = 4;
  }
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x20) - *(int *)(param_1 + 0x7c);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x24) = 0x24;
  }
  else if (iVar1 <= *(int *)(param_1 + 0x84)) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
  }
LAB_5180b4e2:
  if ((*(uint *)(param_1 + 0x80) & 4) == 0) {
    if ((*(uint *)(param_1 + 0x80) & 1) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x34);
      if (iVar1 == 0x10008) {
        psVar4 = (short *)*this;
        psVar3 = (short *)(*(int *)(param_1 + 0x70) + (int)psVar4);
        for (; ((psVar4 < psVar3 && (-3 < (char)*psVar4)) && ((char)*psVar4 < '\x03'));
            psVar4 = (short *)((int)psVar4 + 1)) {
        }
      }
      else if (iVar1 == 0x10010) {
        psVar4 = (short *)*this;
        psVar3 = (short *)((int)psVar4 + (*(uint *)(param_1 + 0x70) & 0xfffffffe));
        for (; ((psVar4 < psVar3 && (-0x148 < *psVar4)) && (*psVar4 < 0x148)); psVar4 = psVar4 + 1)
        {
        }
      }
      else if (iVar1 == 0x20008) {
        psVar4 = (short *)*this;
        local_c[0] = (short *)((int)psVar4 + (*(uint *)(param_1 + 0x70) & 0xfffffffe));
        if (psVar4 < local_c[0]) {
          do {
            iVar1 = FUN_5180d90e((char *)psVar4);
            if (iVar1 == 0) break;
            psVar4 = psVar4 + 1;
          } while (psVar4 < local_c[0]);
        }
      }
      else if (iVar1 == 0x20010) {
        psVar4 = (short *)*this;
        local_c[0] = (short *)((int)psVar4 + (*(uint *)(param_1 + 0x70) & 0xfffffffc));
        if (psVar4 < local_c[0]) {
          do {
            iVar1 = FUN_5180d8e6(psVar4);
            if (iVar1 == 0) break;
            psVar4 = psVar4 + 2;
          } while (psVar4 < local_c[0]);
        }
      }
      else {
        psVar4 = (short *)*this;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - ((int)psVar4 - *this);
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
      *(int *)(param_1 + 0x74) = (int)psVar4 - *this;
    }
    if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x34);
      psVar4 = (short *)(*(int *)(param_1 + 0x74) + *this);
      if (iVar1 == 0x10008) {
        pcVar5 = FUN_5180cf32((char *)psVar4,*(int *)(param_1 + 0x70));
      }
      else if (iVar1 == 0x10010) {
        pcVar5 = (char *)FUN_5180cf02(psVar4,*(uint *)(param_1 + 0x70));
      }
      else if (iVar1 == 0x20008) {
        pcVar5 = (char *)FUN_5180ced2((char *)psVar4,*(uint *)(param_1 + 0x70));
      }
      else if (iVar1 == 0x20010) {
        pcVar5 = (char *)FUN_5180ce9d(psVar4,*(uint *)(param_1 + 0x70));
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x70);
      }
      if (pcVar5 != *(char **)(param_1 + 0x70)) {
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
        *(char **)(param_1 + 0x70) = pcVar5;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}


