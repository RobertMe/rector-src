<?php

namespace Rector\Core\Tests\Issues\Issue6561\Fixture;

final class OnCallMethodReturnArray
{
    public function run()
    {
        $array = $this->get();

        if (count($array)) {
        }
    }

    /**
     * @return string[]
     */
    private function get(): array
    {
        return ['a', 'b'];
    }
}

?>
-----
<?php

namespace Rector\Core\Tests\Issues\Issue6561\Fixture;

final class OnCallMethodReturnArray
{
    public function run()
    {
        $array = $this->get();

        if ($array !== []) {
        }
    }

    /**
     * @return string[]
     */
    private function get(): array
    {
        return ['a', 'b'];
    }
}

?>
