// NNUE�]���֐��̓��͓�����K�̒�`

#ifndef _NNUE_FEATURES_ENPASSANT_H_
#define _NNUE_FEATURES_ENPASSANT_H_

#if defined(EVAL_NNUE)

#include "../../../evaluate.h"
#include "features_common.h"

namespace Eval {

  namespace NNUE {

    namespace Features {

      // ������K�F�ʂ̈ʒu
      class EnPassant {
      public:
        // �����ʖ�
        static constexpr const char* kName = "EnPassant";
        // �]���֐��t�@�C���ɖ��ߍ��ރn�b�V���l
        static constexpr std::uint32_t kHashValue = 0x02924F91u;
        // �����ʂ̎�����
        static constexpr IndexType kDimensions = 8;
        // �����ʂ̂����A�����ɒl��1�ƂȂ�C���f�b�N�X�̐��̍ő�l
        static constexpr IndexType kMaxActiveDimensions = 1;
        // �����v�Z�̑���ɑS�v�Z���s���^�C�~���O
        static constexpr TriggerEvent kRefreshTrigger = TriggerEvent::kAnyPieceMoved;

        // �����ʂ̂����A�l��1�ł���C���f�b�N�X�̃��X�g���擾����
        static void AppendActiveIndices(const Position& pos, Color perspective,
          IndexList* active);

        // �����ʂ̂����A���O����l���ω������C���f�b�N�X�̃��X�g���擾����
        static void AppendChangedIndices(const Position& pos, Color perspective,
          IndexList* removed, IndexList* added);
      };

    }  // namespace Features

  }  // namespace NNUE

}  // namespace Eval

#endif  // defined(EVAL_NNUE)

#endif
